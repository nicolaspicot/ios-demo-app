
#import <Foundation/Foundation.h>
#import "EntityTypeWrapper.h"


#if __cplusplus

namespace lodata
{
    class TypeInstance;
    class StructuralType;
    class ModifiedEntityTypeInstance;
    class ArenaAllocator;
}

#endif


@interface TypeInstanceWrapper : NSObject

@property const NSMutableArray * modifiedPropertyList;

#if __cplusplus

- (instancetype ) initWithCppInstance: (const lodata::TypeInstance * ) cppStructureInstance;

- (void ) fillModifiedInstance:( const lodata::TypeInstance *) cppModifyTypeInstance
                instanceType:(const lodata::StructuralType *) instanceType
                propertyList:(const NSMutableArray *) properties
                allocator: ( lodata::ArenaAllocator * ) allocator;


#endif

- (NSMutableArray * )getPropertyWrapperList : (EntityTypeWrapper * ) entityTypeWrapper error: (NSError *__autoreleasing*) error;

- (NSMutableArray * )getComplexPropertyWrapperList : (EntityTypeWrapper * ) entityTypeWrapper;

@end
