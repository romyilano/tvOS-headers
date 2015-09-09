//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class NSArray, UIColor;

@interface IKColor : NSObject <NSCopying>
{
    UIColor *_color;
    NSArray *_gradientColors;
    long long _colorType;
    long long _gradientType;
    long long _gradientDirectionType;
    NSArray *_gradientPoints;
}

@property(nonatomic) long long gradientDirectionType; // @synthesize gradientDirectionType=_gradientDirectionType;
@property(nonatomic) long long gradientType; // @synthesize gradientType=_gradientType;
@property(copy, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(readonly, copy, nonatomic) NSArray *gradientPoints; // @synthesize gradientPoints=_gradientPoints;
@property(nonatomic) long long colorType; // @synthesize colorType=_colorType;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)setGradientColors:(id)arg1 andPoints:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColor:(id)arg1;

@end
