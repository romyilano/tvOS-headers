//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, QLPackageChecker;

__attribute__((visibility("hidden")))
@interface QLPathTree : NSObject
{
    NSString *_path;
    NSMutableDictionary *_directoryChildren;
    NSMutableArray *_packageChildren;
    QLPackageChecker *_packageChecker;
}

@property(readonly, copy) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)insertInItemsSource:(id)arg1 archiveController:(id)arg2;
- (void)insertInItemsSource:(id)arg1 archiveController:(id)arg2 atIndex:(unsigned long long *)arg3 uiIndex:(unsigned long long *)arg4 level:(long long)arg5;
- (_Bool)isFolder;
- (_Bool)isPackage;
- (id)description;
- (void)addPath:(id)arg1;
- (void)addPathComponents:(id)arg1;
- (void)addPathInsidePackage:(id)arg1;
- (id)initWithPackageChecker:(id)arg1;
- (id)initWithPath:(id)arg1 isPackage:(_Bool)arg2 packageChecker:(id)arg3;

@end

