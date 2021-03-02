//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaBeansPropertyChangeSupport, JavaUtilHashtable, JavaUtilProperties;

@interface JavaUtilLoggingLogManager : NSObject
{
    JavaUtilHashtable *loggers_;
    JavaUtilProperties *props_;
    JavaBeansPropertyChangeSupport *listeners_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)getInstanceByClassWithNSString:(id)arg1;
+ (id)getLogManager;
+ (id)getLoggingMXBean;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (void)setLevelRecursivelyWithJavaUtilLoggingLogger:(id)arg1 withJavaUtilLoggingLevel:(id)arg2;
- (void)setParentWithJavaUtilLoggingLogger:(id)arg1 withJavaUtilLoggingLogger:(id)arg2;
- (id)getOrCreateWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)removePropertyChangeListenerWithJavaBeansPropertyChangeListener:(id)arg1;
- (void)addPropertyChangeListenerWithJavaBeansPropertyChangeListener:(id)arg1;
- (void)reset;
- (void)readConfigurationWithJavaIoInputStream:(id)arg1;
- (void)readConfigurationImplWithJavaIoInputStream:(id)arg1;
- (void)readConfiguration;
- (id)getPropertyWithNSString:(id)arg1;
- (id)getLoggerNames;
- (id)getLoggerWithNSString:(id)arg1;
- (void)addToFamilyTreeWithJavaUtilLoggingLogger:(id)arg1 withNSString:(id)arg2;
- (_Bool)addLoggerWithJavaUtilLoggingLogger:(id)arg1;
- (void)checkAccess;
- (id)init;

@end

