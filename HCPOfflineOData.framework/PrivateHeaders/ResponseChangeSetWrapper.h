//
//  ResponseChangeSetWrapper.h
//
//  Created by Jay Xue on 8/23/16.
//  Copyright © 2016 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseWrapper.h"

@interface ResponseChangeSetWrapper : NSObject

@property NSMutableArray<ResponseWrapper *> * responses;

- (instancetype) init;

- (void) addResponse: (ResponseWrapper *) response;

@end
