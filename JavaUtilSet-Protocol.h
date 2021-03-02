//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "JavaUtilCollection.h"
#import "NSObject.h"

@protocol JavaUtilSet <JavaUtilCollection, NSObject, JavaObject>
- (int)size;
- (_Bool)retainAllWithJavaUtilCollection:(id <JavaUtilCollection>)arg1;
- (_Bool)removeAllWithJavaUtilCollection:(id <JavaUtilCollection>)arg1;
- (_Bool)removeWithId:(id)arg1;
- (id <JavaUtilIterator>)iterator;
- (_Bool)isEmpty;
- (_Bool)containsAllWithJavaUtilCollection:(id <JavaUtilCollection>)arg1;
- (_Bool)containsWithId:(id)arg1;
- (void)clear;
- (_Bool)addAllWithJavaUtilCollection:(id <JavaUtilCollection>)arg1;
- (_Bool)addWithId:(id)arg1;
@end

