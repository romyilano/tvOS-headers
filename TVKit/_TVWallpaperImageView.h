//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@interface _TVWallpaperImageView : UIImageView
{
    int _wallpaperDidChangeNotifyToken;
    _Bool _wallpaperDidChangeNotifyTokenIsValid;
    long long _variant;
    long long _userInterfaceStyle;
}

@property(nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(nonatomic) long long variant; // @synthesize variant=_variant;
- (void)_updateWallpaperImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

