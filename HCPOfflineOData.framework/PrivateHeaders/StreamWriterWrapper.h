//
//  StreamWriterWrapper.h
//
//  Created by Wang, Steven on 8/29/16.
//  Copyright © 2016 sap. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __cplusplus

namespace lodata
{
    class StreamWriter;
}

#endif


@interface StreamWriterWrapper : NSObject

#if __cplusplus

- (instancetype ) initWithCppInstance:( const lodata::StreamWriter * ) cppStreamInstance;

#endif

- (bool ) writeNextChunk:( NSData * ) buffer;

@end
