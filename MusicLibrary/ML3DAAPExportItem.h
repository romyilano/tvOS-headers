//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicLibrary/ML3ExportItem.h>

@interface ML3DAAPExportItem : ML3ExportItem
{
}

- (int)_daapPlaylistKind;
- (int)_daapSortTypeForTrackOrder:(unsigned int)arg1;
- (int)_daapMediaKindForMLMediaType:(int)arg1;
- (unsigned int)_daapCodeForPropertyKey:(unsigned int)arg1;
- (id)exportData;
- (long long)longlongValueForProperty:(unsigned int)arg1;
- (int)longValueForProperty:(unsigned int)arg1;
- (id)valueForProperty:(unsigned int)arg1;

@end

