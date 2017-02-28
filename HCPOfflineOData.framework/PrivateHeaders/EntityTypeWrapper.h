//
//  EntityTypeWrapper.h
//  HCPOfflineOData
//
//  Created by Gong, Yan on 10/26/16.
//  Copyright © 2016 sap. All rights reserved.
//

//
//  EntityTypeResultWrapper.h
//  HCPOfflineOData
//
//  Created by Gong, Yan on 10/26/16.
//  Copyright © 2016 sap. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "EntitySetWrapper.h"
#import "NavigationPropertyWrapper.h"

#if __cplusplus

namespace lodata
{
    class EntityType;
    class Property;
    class ComplexTypeProperty;
    class NavigationProperty;
}

#endif

@interface EntityTypeWrapper : NSObject

#if __cplusplus

- (instancetype ) initWithCppEntityType: (const lodata::EntityType * ) cppEntityType;

- (const lodata::Property * ) getProperty : (NSString * ) propName;

- (const lodata::ComplexTypeProperty * ) getComplexTypeProperty : (NSString * ) complexTypePropName;

- (const lodata::NavigationProperty * ) getNavigationProperty: (NSString * ) navPropName;

#endif

- (NSString * ) getName;

- (NSMutableArray *) getPropertyNames;

- (NSMutableArray *) getComplexTypePropertyNames;

- (EntityTypeWrapper * ) getComplexTypePropertyType : (NSString * ) complexTypePropName;

- (NSMutableArray<NavigationPropertyWrapper *> * ) getNavigationProperties;


@end
