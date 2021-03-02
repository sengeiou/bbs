//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaTextFormat_Field;

@interface JavaTextFieldPosition : NSObject
{
    int field_;
    int beginIndex_;
    int endIndex_;
    JavaTextFormat_Field *attribute_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)setEndIndexWithInt:(int)arg1;
- (void)setBeginIndexWithInt:(int)arg1;
- (unsigned long long)hash;
- (id)getFieldAttribute;
- (int)getField;
- (int)getEndIndex;
- (int)getBeginIndex;
- (_Bool)isEqual:(id)arg1;
- (id)initWithJavaTextFormat_Field:(id)arg1 withInt:(int)arg2;
- (id)initWithJavaTextFormat_Field:(id)arg1;
- (id)initWithInt:(int)arg1;

@end
