//
//  ResponseBatchWrapper.h
//
//  Created by Jay Xue on 8/18/16.
//  Copyright © 2016 SAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseBatchItemWrapper.h"


#if __cplusplus

namespace lodata
{
    class ResponseBatch;
}

#endif


@interface ResponseBatchWrapper : NSObject

@property NSMutableArray<ResponseBatchItemWrapper *> * items;

#if __cplusplus

- (instancetype) initWithCppResponse:(lodata::ResponseBatch * ) cppResponse;

#endif
- (void) close;
@end
