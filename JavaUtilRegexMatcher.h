//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilRegexMatchResult.h"

@class IOSIntArray, JavaUtilRegexPattern, NSString;

@interface JavaUtilRegexMatcher : NSObject <JavaUtilRegexMatchResult>
{
    JavaUtilRegexPattern *pattern__;
    NSString *input_;
    int regionStart__;
    int regionEnd__;
    int findPos_;
    int appendPos_;
    _Bool matchFound_;
    IOSIntArray *matchOffsets_;
    _Bool anchoringBounds_;
    _Bool transparentBounds_;
    int progressFlags_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)quoteReplacementWithNSString:(id)arg1;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (_Bool)requireEndImpl;
- (_Bool)matchesImpl;
- (_Bool)hitEndImpl;
- (int)groupCountImpl;
- (_Bool)findImplWithInt:(int)arg1 withBoolean:(_Bool)arg2;
- (_Bool)hitEnd;
- (_Bool)requireEnd;
- (int)regionEnd;
- (int)regionStart;
- (_Bool)hasTransparentBounds;
- (void)ensureMatch;
- (id)useTransparentBoundsWithBoolean:(_Bool)arg1;
- (_Bool)hasAnchoringBounds;
- (id)useAnchoringBoundsWithBoolean:(_Bool)arg1;
- (id)toMatchResult;
- (int)end;
- (int)groupCount;
- (int)start;
- (int)endWithInt:(int)arg1;
- (int)startWithInt:(int)arg1;
- (_Bool)matches;
- (_Bool)lookingAt;
- (_Bool)find;
- (_Bool)findWithInt:(int)arg1;
- (id)group;
- (id)groupWithInt:(int)arg1;
- (id)pattern;
- (id)replaceAllWithNSString:(id)arg1;
- (id)replaceFirstWithNSString:(id)arg1;
- (id)appendTailWithJavaLangStringBuffer:(id)arg1;
- (id)regionWithInt:(int)arg1 withInt:(int)arg2;
- (id)usePatternWithJavaUtilRegexPattern:(id)arg1;
- (id)resetWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)resetWithJavaLangCharSequence:(id)arg1;
- (id)reset;
- (void)appendEvaluatedWithJavaLangStringBuffer:(id)arg1 withNSString:(id)arg2;
- (id)appendReplacementWithJavaLangStringBuffer:(id)arg1 withNSString:(id)arg2;
- (id)initWithJavaUtilRegexPattern:(id)arg1 withJavaLangCharSequence:(id)arg2;

@end
