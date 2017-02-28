//
//  StoreWrapper.h
//
//  Created by Gong, Yan on 7/15/16.
//  Copyright © 2016 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseBatchWrapper.h"
#import "ResponseWrapper.h"
#import "RequestBatchWrapper.h"
#import "RequestSingleWrapper.h"
#import "StoreOptionsWrapper.h"
#import "StreamWriterWrapper.h"

//The following two line plus the line at end of interaface for ignoring warnings during build.

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnullability-completeness"

#if __cplusplus

namespace lodata
{
    class Store;
}

#endif


@class OfflineODataDelegateInternal;
@class OfflineODataLoggerInternal;

@interface StoreWrapper : NSObject
@property (readonly) OfflineODataDelegateInternal* delegate;
@property (readonly) OfflineODataLoggerInternal* logger;

#if __cplusplus

- (instancetype) initWithCppStore:(lodata::Store * ) cppStore;

#endif

- (BOOL) openStore: (StoreOptionsWrapper *) storeOpts
                    withParams: (NSString*) params
                    delegate: (OfflineODataDelegateInternal*) delegate
                    logger: (OfflineODataLoggerInternal*) logger
                    error: (NSError *__autoreleasing*) error;

- (BOOL) refresh:(NSString *) refreshSubset
                mergeStreamParameters:(NSString *) parameters
                error:(NSError *__autoreleasing*) error;

- (BOOL) getRequestQueueIsEmpty:(NSError *__autoreleasing*) error NS_SWIFT_NOTHROW;

- (BOOL) getHasPendingRefresh:(NSError *__autoreleasing*) error NS_SWIFT_NOTHROW;

- (BOOL) getHasPendingFlush:(NSError *__autoreleasing*) error NS_SWIFT_NOTHROW;

- (BOOL) close:(NSError *__autoreleasing*) error;

- (ResponseWrapper *) executeRequest:(RequestSingleWrapper *) requestWrapper
                        error:(NSError *__autoreleasing*) error;

- (ResponseBatchWrapper *) executeBatchRequest:(RequestBatchWrapper *) requestBatchWrapper
                        error:(NSError *__autoreleasing*) error;

- (const char *) GetServiceRoot;

- (BOOL) flushQueuedRequests:(NSString *) mergeStreamParameters
                       error:(NSError *__autoreleasing*) error;

- (BOOL) registerStreamRequest:(const char *) registerName
                    url:(const char *) url
                    error:(NSError *__autoreleasing*) error;

- (BOOL) unregisterStreamRequest:(const char *) registerName
                    error:(NSError *__autoreleasing*) error;

- (NSString *) getEntitySetFromEntityType:(NSString *) entityTypeName
                    error:(NSError *__autoreleasing*) error;

- (NSString *) getSystemProxyStreamParams:(NSString *) authURL;

- (StreamWriterWrapper *) createStreamWriter: (RequestSingleWrapper *) request
                    error:(NSError *__autoreleasing*) error;

#if DEV
    - (void) setLODataTestCallbacks: (NSInteger (^ _Nonnull)(NSInteger, NSInteger))lodataTestCallback;
	- (void) clearTestCallbacks;
#endif

- (BOOL) pingServer: (NSError *__autoreleasing*) error;

@end
#pragma clang diagnostic pop
