//
//  ChangeSetWrapper.h
//
//  Created by Jay Xue on 8/19/16.
//  Copyright © 2016 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RequestSingleWrapper.h"

@interface ChangeSetWrapper : NSObject

@property NSMutableArray<RequestSingleWrapper *> * changes;

- (instancetype) init;

- (void) addRequest: (RequestSingleWrapper *) request;

@end
