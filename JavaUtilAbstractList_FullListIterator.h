//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilAbstractList_SimpleListIterator.h"

#import "JavaUtilListIterator.h"

@class JavaUtilAbstractList;

@interface JavaUtilAbstractList_FullListIterator : JavaUtilAbstractList_SimpleListIterator <JavaUtilListIterator>
{
    JavaUtilAbstractList *this$1_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)dealloc;
- (void)setWithId:(id)arg1;
- (int)previousIndex;
- (id)previous;
- (int)nextIndex;
- (_Bool)hasPrevious;
- (void)addWithId:(id)arg1;
- (id)initWithJavaUtilAbstractList:(id)arg1 withInt:(int)arg2;

@end

