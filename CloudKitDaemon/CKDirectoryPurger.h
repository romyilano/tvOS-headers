//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CKDirectoryPurger : NSObject
{
    CDUnknownBlockType _shouldSkipFileBlock;
    CDUnknownBlockType _shouldRemoveFileBlock;
    NSArray *_paths;
}

+ (void)purgeDirectoryAtPath:(id)arg1;
@property(retain, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property(copy, nonatomic) CDUnknownBlockType shouldRemoveFileBlock; // @synthesize shouldRemoveFileBlock=_shouldRemoveFileBlock;
@property(copy, nonatomic) CDUnknownBlockType shouldSkipFileBlock; // @synthesize shouldSkipFileBlock=_shouldSkipFileBlock;
- (void).cxx_destruct;
- (void)purge;
- (id)initWithPaths:(id)arg1;

@end
