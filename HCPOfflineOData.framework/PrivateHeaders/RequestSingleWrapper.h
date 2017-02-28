//
//  RequestSingleWrapper.h
//
//  Created by Gong, Yan on 7/23/16.
//  Copyright © 2016 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EnumerationDef.h"
#import "EntityTypeInstanceWrapper.h"


#if __cplusplus

namespace lodata
{
    class RequestSingle;
}

#endif


@interface RequestSingleWrapper : NSObject


@property NSString * requestURL;

@property RequestMethodType  method;

@property NSObject * payload;

- (instancetype) init;

- (instancetype) initWithUrl:( NSString *) url method:( RequestMethodType ) method;

- (void) setUrl:( NSString *) url method:(RequestMethodType) method;

- (BOOL) setHeader:(NSString *)name value:(NSString *)value
            error:(NSError *__autoreleasing*) error;

- (void) setPayload:(NSObject * ) payload;

#if __cplusplus

- (lodata::RequestSingle * ) getCppRequest;

#endif

- (void ) destory;

@end
