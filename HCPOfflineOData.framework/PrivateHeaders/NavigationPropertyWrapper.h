
#import <Foundation/Foundation.h>


#if __cplusplus

namespace lodata
{
    class NavigationProperty;
}

#endif


@interface NavigationPropertyWrapper : NSObject

#if __cplusplus

- (instancetype ) initWithCppNavigationProperty: (const lodata::NavigationProperty * ) cppNavigationProperty;

- (const lodata::NavigationProperty * ) getNavigationProperty;

#endif

- (NSString * ) getName;

@end
