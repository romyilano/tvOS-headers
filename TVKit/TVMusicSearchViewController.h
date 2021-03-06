//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/TVStandardSearchViewController.h>

#import <TVKit/TVStandardSearchViewControllerDelegate-Protocol.h>

@class NSString, TVMusicSearchAgent, TVSDataClient, UILabel;

@interface TVMusicSearchViewController : TVStandardSearchViewController <TVStandardSearchViewControllerDelegate>
{
    TVSDataClient *_dataClient;
    TVMusicSearchAgent *_searchAgent;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TVMusicSearchAgent *searchAgent; // @synthesize searchAgent=_searchAgent;
@property(retain, nonatomic) TVSDataClient *dataClient; // @synthesize dataClient=_dataClient;
- (void).cxx_destruct;
- (void)_loadSearchResultsForSearchText:(id)arg1;
- (void)searchViewController:(id)arg1 didUpdateSearchText:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithDataClient:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

