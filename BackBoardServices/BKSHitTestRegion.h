//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BackBoardServices/NSSecureCoding-Protocol.h>

@interface BKSHitTestRegion : NSObject <NSSecureCoding>
{
    struct CGRect _rect;
    struct CGRect _exclusiveTouchNormalizedSubRect;
    struct CGRect _exclusiveTouchNormalizedSubRectInReferenceSpace;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=_exclusiveTouchNormalizedSubRectInReferenceSpace) struct CGRect exclusiveTouchNormalizedSubRectInReferenceSpace; // @synthesize exclusiveTouchNormalizedSubRectInReferenceSpace=_exclusiveTouchNormalizedSubRectInReferenceSpace;
@property(nonatomic) struct CGRect exclusiveTouchNormalizedSubRect; // @synthesize exclusiveTouchNormalizedSubRect=_exclusiveTouchNormalizedSubRect;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithRect:(struct CGRect)arg1 exclusiveTouchNormalizedSubRect:(struct CGRect)arg2;
- (id)initWithRect:(struct CGRect)arg1;

@end
