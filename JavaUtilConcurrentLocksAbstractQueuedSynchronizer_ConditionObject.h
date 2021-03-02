//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"
#import "JavaUtilConcurrentLocksCondition.h"

@class JavaUtilConcurrentLocksAbstractQueuedSynchronizer, JavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node;

@interface JavaUtilConcurrentLocksAbstractQueuedSynchronizer_ConditionObject : NSObject <JavaUtilConcurrentLocksCondition, JavaIoSerializable>
{
    JavaUtilConcurrentLocksAbstractQueuedSynchronizer *this$0_;
    JavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node *firstWaiter_;
    JavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node *lastWaiter_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)getWaitingThreads;
- (int)getWaitQueueLength;
- (_Bool)hasWaiters;
- (_Bool)isOwnedByWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer:(id)arg1;
- (_Bool)awaitWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnitEnum:(id)arg2;
- (_Bool)awaitUntilWithJavaUtilDate:(id)arg1;
- (long long)awaitNanosWithLong:(long long)arg1;
- (void)await;
- (void)reportInterruptAfterWaitWithInt:(int)arg1;
- (int)checkInterruptWhileWaitingWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg1;
- (void)awaitUninterruptibly;
- (void)signalAll;
- (void)signal;
- (void)unlinkCancelledWaiters;
- (void)doSignalAllWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg1;
- (void)doSignalWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg1;
- (id)addConditionWaiter;
- (id)initWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer:(id)arg1;

@end

