//
//  ResponseBatchItem.h
//
//  Created by Jay Xue on 8/23/16.
//  Copyright © 2016 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseWrapper.h"
#import "ResponseChangeSetWrapper.h"
#import "EnumerationDef.h"

@interface ResponseBatchItemWrapper : NSObject

@property BatItemType type;

@property ResponseWrapper * single;

@property ResponseChangeSetWrapper * changeSet;

@end
