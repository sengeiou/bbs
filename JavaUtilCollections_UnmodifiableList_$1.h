//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilListIterator.h"

@interface JavaUtilCollections_UnmodifiableList_$1 : NSObject <JavaUtilListIterator>
{
    id <JavaUtilListIterator> iterator_;
    int val$location_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)initWithJavaUtilCollections_UnmodifiableList:(id)arg1 withInt:(int)arg2;
- (void)setWithId:(id)arg1;
- (void)remove;
- (int)previousIndex;
- (id)previous;
- (int)nextIndex;
- (id)next;
- (_Bool)hasPrevious;
- (_Bool)hasNext;
- (void)addWithId:(id)arg1;

@end

