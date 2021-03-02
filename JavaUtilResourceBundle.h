//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaUtilLocale;

@interface JavaUtilResourceBundle : NSObject
{
    JavaUtilResourceBundle *parent_;
    JavaUtilLocale *locale_;
    long long lastLoadTime_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (void)clearCacheWithJavaLangClassLoader:(id)arg1;
+ (void)clearCache;
+ (id)stripWithJavaUtilLocale:(id)arg1;
+ (id)getLoaderCacheWithId:(id)arg1;
+ (id)handleGetBundleWithBoolean:(_Bool)arg1 withNSString:(id)arg2 withJavaUtilLocale:(id)arg3 withJavaLangClassLoader:(id)arg4;
+ (id)processGetBundleWithNSString:(id)arg1 withJavaUtilLocale:(id)arg2 withJavaLangClassLoader:(id)arg3 withJavaUtilResourceBundle_Control:(id)arg4 withBoolean:(_Bool)arg5 withJavaUtilResourceBundle:(id)arg6;
+ (id)getBundleWithNSString:(id)arg1 withJavaUtilLocale:(id)arg2 withJavaLangClassLoader:(id)arg3 withJavaUtilResourceBundle_Control:(id)arg4;
+ (id)getLoader;
+ (id)getBundleWithNSString:(id)arg1 withJavaUtilLocale:(id)arg2 withJavaUtilResourceBundle_Control:(id)arg3;
+ (id)getBundleWithNSString:(id)arg1 withJavaUtilResourceBundle_Control:(id)arg2;
+ (id)missingResourceExceptionWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)getBundleWithNSString:(id)arg1 withJavaUtilLocale:(id)arg2 withJavaLangClassLoader:(id)arg3;
+ (id)getBundleWithNSString:(id)arg1 withJavaUtilLocale:(id)arg2;
+ (id)getBundleWithNSString:(id)arg1;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (id)handleKeySet;
- (id)keySet;
- (_Bool)containsKeyWithNSString:(id)arg1;
- (void)setLocaleWithJavaUtilLocale:(id)arg1;
- (void)setParentWithJavaUtilResourceBundle:(id)arg1;
- (id)handleGetObjectWithNSString:(id)arg1;
- (id)getStringArrayWithNSString:(id)arg1;
- (id)getStringWithNSString:(id)arg1;
- (id)getObjectWithNSString:(id)arg1;
- (id)getLocale;
- (id)getKeys;
- (id)init;

@end

