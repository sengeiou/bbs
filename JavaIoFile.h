//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"
#import "JavaLangComparable.h"

@class NSString;

@interface JavaIoFile : NSObject <JavaIoSerializable, JavaLangComparable>
{
    NSString *path_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_toURL;
+ (void)initialize;
+ (_Bool)isCaseSensitiveImpl;
+ (id)createTempFileWithNSString:(id)arg1 withNSString:(id)arg2 withJavaIoFile:(id)arg3;
+ (id)createTempFileWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)listImplWithNSString:(id)arg1;
+ (_Bool)setLastModifiedImplWithNSString:(id)arg1 withLong:(long long)arg2;
+ (id)listRoots;
+ (void)checkURIWithJavaNetURI:(id)arg1;
+ (id)joinWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)fixSlashesWithNSString:(id)arg1;
+ (id)memDebugStaticReferences;
- (id)memDebugStrongReferences;
- (void)copyAllFieldsTo:(id)arg1;
- (void)dealloc;
- (long long)getFreeSpace;
- (long long)getUsableSpace;
- (long long)getTotalSpace;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (id)getAbsoluteName;
- (id)toURL;
- (id)toURI;
- (id)description;
- (_Bool)renameToWithJavaIoFile:(id)arg1;
- (_Bool)createNewFile;
- (_Bool)mkdirsWithBoolean:(_Bool)arg1;
- (_Bool)mkdirs;
- (_Bool)mkdirImplWithNSString:(id)arg1;
- (_Bool)mkdir;
- (id)filenamesToFilesWithNSStringArray:(id)arg1;
- (id)listFilesWithJavaIoFileFilter:(id)arg1;
- (id)listFilesWithJavaIoFilenameFilter:(id)arg1;
- (id)listFiles;
- (id)listWithJavaIoFilenameFilter:(id)arg1;
- (id)list;
- (long long)length;
- (_Bool)doChmodWithInt:(int)arg1 withBoolean:(_Bool)arg2;
- (_Bool)setWritableWithBoolean:(_Bool)arg1;
- (_Bool)setWritableWithBoolean:(_Bool)arg1 withBoolean:(_Bool)arg2;
- (_Bool)setReadableWithBoolean:(_Bool)arg1;
- (_Bool)setReadableWithBoolean:(_Bool)arg1 withBoolean:(_Bool)arg2;
- (_Bool)setExecutableWithBoolean:(_Bool)arg1;
- (_Bool)setExecutableWithBoolean:(_Bool)arg1 withBoolean:(_Bool)arg2;
- (_Bool)setReadOnly;
- (_Bool)setLastModifiedWithLong:(long long)arg1;
- (long long)lastModified;
- (_Bool)isHidden;
- (_Bool)isFile;
- (_Bool)isDirectory;
- (_Bool)isAbsolute;
- (unsigned long long)hash;
- (id)getPath;
- (id)getParentFile;
- (id)getParent;
- (id)getName;
- (id)getCanonicalFile;
- (id)getCanonicalPath;
- (id)getAbsoluteFile;
- (id)getAbsolutePath;
- (_Bool)exists;
- (_Bool)isEqual:(id)arg1;
- (void)deleteOnExit;
- (_Bool)delete__;
- (int)compareToWithId:(id)arg1;
- (_Bool)doAccessWithInt:(int)arg1;
- (_Bool)canWrite;
- (_Bool)canRead;
- (_Bool)canExecute;
- (id)initWithJavaNetURI:(id)arg1;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)initJavaIoFileWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)initWithNSString:(id)arg1;
- (id)initWithJavaIoFile:(id)arg1 withNSString:(id)arg2;

@end

