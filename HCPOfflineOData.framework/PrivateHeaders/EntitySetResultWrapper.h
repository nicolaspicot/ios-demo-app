//
//  EntitySetResultWrapper.h
//
//  Created by Gong, Yan on 7/28/16.
//  Copyright © 2016 sap. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EntitySetWrapper.h"
#import "EntityTypeWrapper.h"

#if __cplusplus

namespace lodata
{
    class EntitySetResult;
}

#endif

@interface EntitySetResultWrapper : NSObject

#if __cplusplus

- (instancetype ) initWithCppEntitySetResult: (const lodata::EntitySetResult * ) cppEntitySetResult;

#endif

- (NSMutableArray * ) getEntityTypeInstanceList;

- (EntitySetWrapper * ) getEntitySetWrapper;

- (EntityTypeWrapper * ) getEntityTypeWrapper;

- (const NSString * ) getNextLink;

- (UInt32 ) getNumberOfEntityTypeInstance;

- (bool) hasInlinecount;

- (UInt64) getInlinecount;

@end
