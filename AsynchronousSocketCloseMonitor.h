//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AsynchronousSocketCloseMonitor : NSObject
{
    AsynchronousSocketCloseMonitor *mPrev;
    AsynchronousSocketCloseMonitor *mNext;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[1168];
    } *mThread;
    int mFd;
}

+ (void)initialize;
+ (void)signalBlockedThreads:(int)arg1;
- (void)dealloc;
- (id)initWithFileDescriptor:(int)arg1;

@end

