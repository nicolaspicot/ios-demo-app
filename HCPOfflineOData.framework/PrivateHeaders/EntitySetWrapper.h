//
//  EntitySetWrapper.h
//  HCPOfflineOData
//
//  Created by Gong, Yan on 10/27/16.
//  Copyright © 2016 sap. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __cplusplus

namespace lodata
{
    class EntitySet;
}

#endif

@interface EntitySetWrapper : NSObject

#if __cplusplus

- (instancetype ) initWithCppEntitySet:( const lodata::EntitySet * ) cppEntitySet;

- (const lodata::EntitySet * ) getEntitySet;

#endif

- (NSString * ) getName;

@end
