//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SBFLazyObjectProvider : NSObject
{
    id _object;
    CDUnknownBlockType _generator;
}

@property(copy, nonatomic) CDUnknownBlockType generator; // @synthesize generator=_generator;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void)dealloc;
- (id)initWithGenerator:(CDUnknownBlockType)arg1;

@end
