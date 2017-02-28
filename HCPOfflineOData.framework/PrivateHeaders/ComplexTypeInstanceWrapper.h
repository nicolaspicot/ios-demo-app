//
//  ComplexTypeInstanceWrapper.h
//
//  Created by Wang, Steven on 8/11/16.
//  Copyright © 2016 sap. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TypeInstanceWrapper.h"


#if __cplusplus

namespace lodata
{
    class ComplexTypeInstance;
}

#endif


@interface ComplexTypeInstanceWrapper : TypeInstanceWrapper

@property NSString * propertyName;

#if __cplusplus

- ( instancetype ) initWithCppInstance: ( const lodata::ComplexTypeInstance * ) cppComplexInstance;

#endif

- ( NSString * ) getPropertyName;

@end
