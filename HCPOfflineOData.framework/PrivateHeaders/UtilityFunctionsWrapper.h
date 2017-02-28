
#import <Foundation/Foundation.h>
#import "EntitySetWrapper.h"
#import "EntityTypeWrapper.h"

@interface UtilityFunctionsWrapper : NSObject

+ (EntitySetWrapper * ) getNextEntitySetWrapper : (EntitySetWrapper * )currentSetWrapper
                                            navPropWrapper : (NavigationPropertyWrapper *) navPropWrapper;

+ (EntityTypeWrapper * ) getEntityTypeWrapper : (EntitySetWrapper * ) currentSetWrapper
                                            navPropWrapper : (NavigationPropertyWrapper *) navPropWrapper;


@end
