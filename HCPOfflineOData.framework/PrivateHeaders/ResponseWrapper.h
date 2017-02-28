//
//  ResponseWrapper.h
//
//  Created by Gong, Yan on 7/23/16.
//  Copyright © 2016 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EntitySetResultWrapper.h"
#import "EntityTypeResultWrapper.h"
#import "EntityTypeInstanceWrapper.h"

#import "StreamInstanceWrapper.h"


#if __cplusplus

namespace lodata
{
    class Response;
}

#endif


@interface ResponseWrapper : NSObject

@property EntitySetResultWrapper * entitySetResultWrapperObj;

@property EntityTypeInstanceWrapper * entityTypeInstanceWrapperObj;

@property StreamInstanceWrapper * streamInstanceWrapperObj;

#if __cplusplus

- (instancetype) initWithCppResponse:( lodata::Response * ) cppResponse;

#endif

- (const NSString *) getMetadataDocument;

- (int ) getResponseType;

- (NSString *) getHeader:(NSString * ) name;

- (const EntitySetResultWrapper *) getEntitySetResultWrapper;

- (const EntityTypeResultWrapper *) getEntityTypeResultWrapper;

- (const StreamInstanceWrapper *) getStreamInstanceWrapper ;

// Return the count in the result of a request with $count option.
// This method is currently not used since HCPOData DataQuery does not support $count yet.
// Just leave it here for future development.
- (UInt64) getCount;

- (int) getStatusCode;

- (bool) hasError;

- (int) getErrorCode;

- (const NSString *) getErrorMessage;

@end
