//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"
#import "JavaUtilMap.h"

@class IOSClass;

@interface JavaUtilCollections_CheckedMap : NSObject <JavaUtilMap, JavaIoSerializable>
{
    id <JavaUtilMap> m_;
    IOSClass *keyType_;
    IOSClass *valueType_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)entrySet;
- (id)values;
- (id)keySet;
- (void)clear;
- (void)putAllWithJavaUtilMap:(id)arg1;
- (id)removeWithId:(id)arg1;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (id)getWithId:(id)arg1;
- (_Bool)containsValueWithId:(id)arg1;
- (_Bool)containsKeyWithId:(id)arg1;
- (_Bool)isEmpty;
- (int)size;
- (id)initWithJavaUtilMap:(id)arg1 withIOSClass:(id)arg2 withIOSClass:(id)arg3;

@end

