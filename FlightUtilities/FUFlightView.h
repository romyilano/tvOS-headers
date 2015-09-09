//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FUFlight, FULabel, FUPlaneTrackerAnnotationView, MKGeodesicPolyline, MKMapView, NSMutableArray, UIButton, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface FUFlightView : UIView
{
    FUPlaneTrackerAnnotationView *_planeTracker;
    NSMutableArray *_arcs;
    MKGeodesicPolyline *_currentArc;
    _Bool _highlightCurrentFlightLeg;
    FUFlight *_flight;
    FULabel *_labelAirlineName;
    FULabel *_labelFlightCode;
    FULabel *_labelStatusTitle;
    FULabel *_labelStatus;
    FULabel *_labelDepartureCity;
    FULabel *_labelDepartureCode;
    FULabel *_labelDepartureTerminal;
    FULabel *_labelDepartureGate;
    FULabel *_labelArrivalCity;
    FULabel *_labelArrivalCode;
    FULabel *_labelArrivalTerminal;
    FULabel *_labelArrivalGate;
    FULabel *_labelDepartureTitle;
    FULabel *_labelDepartureDate;
    FULabel *_labelDepartureDelay;
    FULabel *_labelArrivalTitle;
    FULabel *_labelArrivalDate;
    FULabel *_labelArrivalDelay;
    long long _currentFocus;
    MKMapView *_mapView;
    UIButton *_flightButton;
    UIVisualEffectView *_backBlurView;
    UIView *_flightInfoView;
    UIView *_borderLineViewLandscape;
    UIView *_borderLineViewPortrait;
    UIView *_errorView;
    UIView *_loadingView;
}

@property(retain) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain) UIView *errorView; // @synthesize errorView=_errorView;
@property __weak UIView *borderLineViewPortrait; // @synthesize borderLineViewPortrait=_borderLineViewPortrait;
@property __weak UIView *borderLineViewLandscape; // @synthesize borderLineViewLandscape=_borderLineViewLandscape;
@property __weak UIView *flightInfoView; // @synthesize flightInfoView=_flightInfoView;
@property __weak UIVisualEffectView *backBlurView; // @synthesize backBlurView=_backBlurView;
@property __weak UIButton *flightButton; // @synthesize flightButton=_flightButton;
@property __weak MKMapView *mapView; // @synthesize mapView=_mapView;
@property long long currentFocus; // @synthesize currentFocus=_currentFocus;
@property __weak FULabel *labelArrivalDelay; // @synthesize labelArrivalDelay=_labelArrivalDelay;
@property __weak FULabel *labelArrivalDate; // @synthesize labelArrivalDate=_labelArrivalDate;
@property __weak FULabel *labelArrivalTitle; // @synthesize labelArrivalTitle=_labelArrivalTitle;
@property __weak FULabel *labelDepartureDelay; // @synthesize labelDepartureDelay=_labelDepartureDelay;
@property __weak FULabel *labelDepartureDate; // @synthesize labelDepartureDate=_labelDepartureDate;
@property __weak FULabel *labelDepartureTitle; // @synthesize labelDepartureTitle=_labelDepartureTitle;
@property __weak FULabel *labelArrivalGate; // @synthesize labelArrivalGate=_labelArrivalGate;
@property __weak FULabel *labelArrivalTerminal; // @synthesize labelArrivalTerminal=_labelArrivalTerminal;
@property __weak FULabel *labelArrivalCode; // @synthesize labelArrivalCode=_labelArrivalCode;
@property __weak FULabel *labelArrivalCity; // @synthesize labelArrivalCity=_labelArrivalCity;
@property __weak FULabel *labelDepartureGate; // @synthesize labelDepartureGate=_labelDepartureGate;
@property __weak FULabel *labelDepartureTerminal; // @synthesize labelDepartureTerminal=_labelDepartureTerminal;
@property __weak FULabel *labelDepartureCode; // @synthesize labelDepartureCode=_labelDepartureCode;
@property __weak FULabel *labelDepartureCity; // @synthesize labelDepartureCity=_labelDepartureCity;
@property __weak FULabel *labelStatus; // @synthesize labelStatus=_labelStatus;
@property __weak FULabel *labelStatusTitle; // @synthesize labelStatusTitle=_labelStatusTitle;
@property __weak FULabel *labelFlightCode; // @synthesize labelFlightCode=_labelFlightCode;
@property __weak FULabel *labelAirlineName; // @synthesize labelAirlineName=_labelAirlineName;
@property(nonatomic) _Bool highlightCurrentFlightLeg; // @synthesize highlightCurrentFlightLeg=_highlightCurrentFlightLeg;
@property(retain, nonatomic) FUFlight *flight; // @synthesize flight=_flight;
- (void).cxx_destruct;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)updateMapCamera;
- (void)fitMap:(_Bool)arg1;
- (id)flightCamera;
- (id)departureCamera;
- (id)arrivalCamera;
- (void)cleanupView;
- (void)addArc:(id)arg1;
- (void)layoutSubviews;
- (void)showInfo;
- (void)showError;
- (void)showLoading;
- (void)flightButtonTapped:(id)arg1;
- (void)setupLabelStyles;
- (void)awakeFromNib;

@end
