//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilAbstractMap.h"

#import "JavaIoSerializable.h"
#import "JavaUtilNavigableMap.h"

@class JavaUtilTreeMap, JavaUtilTreeMap_BoundEnum, JavaUtilTreeMap_BoundedMap_BoundedEntrySet, JavaUtilTreeMap_BoundedMap_BoundedKeySet, JavaUtilTreeMap_BoundedMap_BoundedValuesCollection;

@interface JavaUtilTreeMap_BoundedMap : JavaUtilAbstractMap <JavaUtilNavigableMap, JavaIoSerializable>
{
    JavaUtilTreeMap *this$0_;
    _Bool ascending_;
    id from_;
    JavaUtilTreeMap_BoundEnum *fromBound_;
    id to_;
    JavaUtilTreeMap_BoundEnum *toBound_;
    JavaUtilTreeMap_BoundedMap_BoundedEntrySet *entrySet__;
    JavaUtilTreeMap_BoundedMap_BoundedKeySet *keySet_BoundedMap_;
    JavaUtilTreeMap_BoundedMap_BoundedValuesCollection *valuesCollection_BoundedMap_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)writeReplace;
- (id)outOfBoundsWithId:(id)arg1 withJavaUtilTreeMap_BoundEnum:(id)arg2 withJavaUtilTreeMap_BoundEnum:(id)arg3;
- (id)subMapWithId:(id)arg1 withJavaUtilTreeMap_BoundEnum:(id)arg2 withId:(id)arg3 withJavaUtilTreeMap_BoundEnum:(id)arg4;
- (id)tailMapWithId:(id)arg1;
- (id)tailMapWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id)headMapWithId:(id)arg1;
- (id)headMapWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id)subMapWithId:(id)arg1 withId:(id)arg2;
- (id)subMapWithId:(id)arg1 withBoolean:(_Bool)arg2 withId:(id)arg3 withBoolean:(_Bool)arg4;
- (id)descendingKeySet;
- (id)descendingMap;
- (id)values;
- (id)navigableKeySet;
- (id)keySet;
- (id)entrySet;
- (id)comparator;
- (id)higherKeyWithId:(id)arg1;
- (id)higherEntryWithId:(id)arg1;
- (id)ceilingKeyWithId:(id)arg1;
- (id)ceilingEntryWithId:(id)arg1;
- (id)floorKeyWithId:(id)arg1;
- (id)floorEntryWithId:(id)arg1;
- (id)lowerKeyWithId:(id)arg1;
- (id)lowerEntryWithId:(id)arg1;
- (id)findBoundedWithId:(id)arg1 withJavaUtilTreeMap_RelationEnum:(id)arg2;
- (id)endpointWithBoolean:(_Bool)arg1;
- (id)lastKey;
- (id)pollLastEntry;
- (id)lastEntry;
- (id)firstKey;
- (id)pollFirstEntry;
- (id)firstEntry;
- (id)boundWithJavaUtilTreeMap_Node:(id)arg1 withJavaUtilTreeMap_BoundEnum:(id)arg2 withJavaUtilTreeMap_BoundEnum:(id)arg3;
- (_Bool)isInBoundsWithId:(id)arg1 withJavaUtilTreeMap_BoundEnum:(id)arg2 withJavaUtilTreeMap_BoundEnum:(id)arg3;
- (_Bool)isInBoundsWithId:(id)arg1;
- (id)removeWithId:(id)arg1;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (_Bool)containsKeyWithId:(id)arg1;
- (id)getWithId:(id)arg1;
- (_Bool)isEmpty;
- (int)size;
- (id)initWithJavaUtilTreeMap:(id)arg1 withBoolean:(_Bool)arg2 withId:(id)arg3 withJavaUtilTreeMap_BoundEnum:(id)arg4 withId:(id)arg5 withJavaUtilTreeMap_BoundEnum:(id)arg6;

@end

