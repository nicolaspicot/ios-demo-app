//
//  RequestBatchWrapper.h
//
//  Created by Jay Xue on 8/18/16.
//  Copyright © 2016 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BatchItemWrapper.h"

@interface RequestBatchWrapper : NSObject

@property NSMutableArray<BatchItemWrapper *> * items;

@property NSMutableDictionary * headers;

- (instancetype) init;

- (void) addItem: (BatchItemWrapper *) batchItem;

- (void) setHeader: (NSString * ) key header: (NSString * ) header;

@end
