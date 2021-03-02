//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaUtilLoggingLevel, JavaUtilResourceBundle, NSString;

@interface JavaUtilLoggingLogger : NSObject
{
    JavaUtilLoggingLogger *parent_;
    JavaUtilLoggingLevel *levelObjVal_;
    int levelIntVal_;
    id <JavaUtilList> children_;
    NSString *name_;
    id <JavaUtilLoggingFilter> filter_;
    NSString *resourceBundleName_;
    JavaUtilResourceBundle *resourceBundle_;
    id <JavaUtilList> handlers_;
    _Bool notifyParentHandlers_;
    _Bool isNamed_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_global_;
+ (void)initialize;
+ (id)getGlobal;
+ (id)getLoggerWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)getLoggerWithNSString:(id)arg1;
+ (id)getAnonymousLoggerWithNSString:(id)arg1;
+ (id)getAnonymousLogger;
+ (id)loadResourceBundleWithNSString:(id)arg1;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (void)reset;
- (void)logrbWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5 withJavaLangThrowable:(id)arg6;
- (void)logrbWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5 withNSObjectArray:(id)arg6;
- (void)logrbWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5 withId:(id)arg6;
- (void)logrbWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5;
- (void)logpWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withJavaLangThrowable:(id)arg5;
- (void)logpWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSObjectArray:(id)arg5;
- (void)logpWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withId:(id)arg5;
- (void)logpWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4;
- (void)logWithJavaUtilLoggingLogRecord:(id)arg1;
- (void)logWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withJavaLangThrowable:(id)arg3;
- (void)logWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withNSObjectArray:(id)arg3;
- (void)logWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withId:(id)arg3;
- (void)logWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2;
- (void)finestWithNSString:(id)arg1;
- (void)finerWithNSString:(id)arg1;
- (void)fineWithNSString:(id)arg1;
- (void)configWithNSString:(id)arg1;
- (void)infoWithNSString:(id)arg1;
- (void)warningWithNSString:(id)arg1;
- (void)severeWithNSString:(id)arg1;
- (void)throwingWithNSString:(id)arg1 withNSString:(id)arg2 withJavaLangThrowable:(id)arg3;
- (void)exitingWithNSString:(id)arg1 withNSString:(id)arg2 withId:(id)arg3;
- (void)exitingWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)enteringWithNSString:(id)arg1 withNSString:(id)arg2 withNSObjectArray:(id)arg3;
- (void)enteringWithNSString:(id)arg1 withNSString:(id)arg2 withId:(id)arg3;
- (void)enteringWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)setResourceBundleWithJavaUtilLoggingLogRecord:(id)arg1;
- (_Bool)isLoggableWithJavaUtilLoggingLevel:(id)arg1;
- (_Bool)internalIsLoggableWithJavaUtilLoggingLevel:(id)arg1;
- (id)getResourceBundleName;
- (id)getResourceBundle;
- (id)getName;
- (void)setParentWithJavaUtilLoggingLogger:(id)arg1;
- (id)getParent;
- (void)setUseParentHandlersWithBoolean:(_Bool)arg1;
- (_Bool)getUseParentHandlers;
- (void)setLevelWithJavaUtilLoggingLevel:(id)arg1;
- (id)getLevel;
- (void)setFilterWithJavaUtilLoggingFilter:(id)arg1;
- (id)getFilter;
- (void)removeHandlerWithJavaUtilLoggingHandler:(id)arg1;
- (id)getHandlers;
- (void)setManagerWithJavaUtilLoggingLogManager:(id)arg1;
- (void)addHandlerWithJavaUtilLoggingHandler:(id)arg1;
- (void)initResourceBundleWithNSString:(id)arg1;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2;

@end

