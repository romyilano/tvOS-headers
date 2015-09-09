//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKDataAccessor.h>

@class NSString, PKPassLibrary;

@interface PKRemoteDataAccessor : PKDataAccessor
{
    PKPassLibrary *_library;
    NSString *_objectUniqueID;
}

@property(readonly, retain, nonatomic) NSString *objectUniqueID; // @synthesize objectUniqueID=_objectUniqueID;
@property(readonly, retain, nonatomic) PKPassLibrary *library; // @synthesize library=_library;
- (id)displayProfileOfType:(long long)arg1;
- (id)archiveData;
- (void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(_Bool)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)contentWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSettings:(unsigned long long)arg1;
- (void)noteShared;
- (void)revocationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1 objectUniqueID:(id)arg2;

@end
