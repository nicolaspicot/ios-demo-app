//
//  BatchItemWrapper.h
//
//  Created by Jay Xue on 8/19/16.
//  Copyright © 2016 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RequestSingleWrapper.h"
#import "ChangeSetWrapper.h"

@interface BatchItemWrapper : NSObject

@property BatItemType type;

@property RequestSingleWrapper * queryOperation;

@property ChangeSetWrapper * changeSet;

@end
