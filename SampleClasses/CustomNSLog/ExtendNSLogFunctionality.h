//
//  ExtendNSLogFunctionality.h
//  AppTemplate
//
//  Created by 周国勇 on 12/5/13.
//  Copyright (c) 2013 周国勇. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ExtendNSLogFunctionality : NSObject

#ifdef DEBUG
#define mlog(args...) ExtendNSLog(__FILE__,__LINE__,__PRETTY_FUNCTION__,args);
#else
#define NSLog(x...)
#define mlog(args...)
#endif

void ExtendNSLog(const char *file, int lineNumber, const char *functionName, NSString *format, ...);
@end
