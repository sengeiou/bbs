//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"
#import "JavaLangComparable.h"

@class NSString;

@interface JavaLangEnum : NSObject <JavaIoSerializable, JavaLangComparable>
{
    NSString *name__;
    int ordinal__;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)getValuesWithIOSClass:(id)arg1;
+ (id)valueOfWithIOSClass:(id)arg1 withNSString:(id)arg2;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)getDeclaringClass;
- (int)compareToWithId:(id)arg1;
- (id)clone;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (int)ordinal;
- (id)name;
- (id)initWithNSString:(id)arg1 withInt:(int)arg2;

@end

