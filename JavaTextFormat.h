//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"
#import "NSCopying.h"

@interface JavaTextFormat : NSObject <JavaIoSerializable, NSCopying>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (_Bool)upToWithQuotesWithNSString:(id)arg1 withJavaTextParsePosition:(id)arg2 withJavaLangStringBuffer:(id)arg3 withChar:(unsigned short)arg4 withChar:(unsigned short)arg5;
+ (_Bool)upToWithNSString:(id)arg1 withJavaTextParsePosition:(id)arg2 withJavaLangStringBuffer:(id)arg3 withChar:(unsigned short)arg4;
+ (id)memDebugStaticReferences;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)parseObjectWithNSString:(id)arg1 withJavaTextParsePosition:(id)arg2;
- (id)parseObjectWithNSString:(id)arg1;
- (id)formatToCharacterIteratorWithId:(id)arg1;
- (id)formatWithId:(id)arg1 withJavaLangStringBuffer:(id)arg2 withJavaTextFieldPosition:(id)arg3;
- (id)formatWithId:(id)arg1;
- (id)clone;
- (id)init;

@end
