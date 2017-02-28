//
//  EntityTypeInstanceWrapper.h
//
//  Created by Gong, Yan on 7/28/16.
//  Copyright © 2016 sap. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TypeInstanceWrapper.h"

#if __cplusplus

namespace lodata
{
    class EntityTypeInstance;
    class EntityType;
    class ArenaAllocator;
    class ModifiedEntityTypeInstance;
}

#endif

@class InlineEntitiesInfo;

@interface EntityTypeInstanceWrapper : TypeInstanceWrapper

@property NSString * editLink;

@property NSString * readLink; // In lodata, it is entityId

@property NSString * etag;

@property NSString * entityId;

@property NSString * mediaEditLink;

@property NSString * mediaETag;

@property NSMutableDictionary * modifiedInlineEntities;

@property NSMutableDictionary * modifiedNaviationBindings;

@property NSString * entitySetName;

@property NSString * entityTypeName;

@property bool isNewEntity;

- (instancetype ) init;

#if __cplusplus

- (instancetype ) initWithCppEntityInstance:( const lodata::EntityTypeInstance * ) cppEntityTypeInstance;

- (lodata::ModifiedEntityTypeInstance *) getModifiledEntityTypeInstance:( const lodata::EntityType *) cppStructureType allocator: ( lodata::ArenaAllocator * ) allocator;

#endif

- (InlineEntitiesInfo* ) getInlineEntities: (EntityTypeWrapper * ) entityTypeWrapper navPropName : ( NSString * ) propertyName;

-(NSString * ) getMediaContentType;

-(NSString * ) getMediaEntityTag;

-(NSString * ) getMediaEditLink;

-(NSString * ) getMediaReadLink;

@end

@interface InlineEntitiesInfo : NSObject 

@property Boolean isMultiple;

@property NSMutableArray* multiEntities;

@property EntityTypeInstanceWrapper * singleEntity;

- (instancetype ) init;

@end

@interface AnnotationInfo : NSObject<NSCopying>

- (instancetype) initWithName : (NSString * ) name_in annotationNamespace : ( NSString * ) annotationNameSapce_in;

@end
