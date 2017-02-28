//
//  PropertyWrapper.h
//
//  Created by Gong, Yan on 7/28/16.
//  Copyright © 2016 sap. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EnumerationDef.h"

@interface PropertyWrapper : NSObject

@property NSString * propertyName;

@property int32_t id;

@property PropType type;

@property bool booleanValue;

@property uint8_t uByteValue;

@property int8_t byteValue;

@property double doubleValue;

@property float floatValue;

@property NSData * guidValue;

@property int8_t int8Value;

@property int16_t int16Value;

@property int32_t int32Value;

@property int64_t int64Value;

@property NSString * stringValue;

@property bool isNull;

@property bool isNullable;

@property NSData * binaryValue;

@property NSNumber * singleValue;

@property NSString * timeValue;



@end
