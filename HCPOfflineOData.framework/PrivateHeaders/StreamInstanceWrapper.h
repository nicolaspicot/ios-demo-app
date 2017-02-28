//
//  StreamInstanceWrapper.h
//
//  Created by Wang, Steven on 8/15/16.
//  Copyright © 2016 sap. All rights reserved.
//

#import <Foundation/Foundation.h>


#if __cplusplus

namespace lodata
{
    class StreamResult;
}

#endif


@interface StreamInstanceWrapper : NSObject

#if __cplusplus

- (instancetype ) initWithCppInstance:( const lodata::StreamResult * ) cppStremInstance;

#endif

- (NSInteger) readByte;

- (void) close;

@end
