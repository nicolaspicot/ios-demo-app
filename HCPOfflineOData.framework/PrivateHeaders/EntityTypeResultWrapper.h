//
//  EntityTypeResultWrapper.h
//  HCPOfflineOData
//
//  Created by Gong, Yan on 10/26/16.
//  Copyright © 2016 sap. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "EntityTypeInstanceWrapper.h"
#import "EntityTypeWrapper.h"
#import "EntitySetWrapper.h"

#if __cplusplus

namespace lodata
{
    class EntityTypeResult;
}

#endif

@interface EntityTypeResultWrapper : NSObject

#if __cplusplus

- (instancetype ) initWithCppEntityTypeResult:(const lodata::EntityTypeResult * ) cppEntityTypeResult;

#endif

- (const EntityTypeWrapper * ) getEntityTypeWrapper;

- (const EntitySetWrapper * ) getEntitySetWrapper;

- (const EntityTypeInstanceWrapper *) GetEntityTypeInstanceWrapper;


@end
