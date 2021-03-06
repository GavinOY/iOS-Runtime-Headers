/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
 */

@interface UpNextWidget.GutterizedEventView : UIView {
    void calendarColor;
    void colorBarView;
    void dateInterval;
    void eventTrailingView;
    void location;
    void showTravelAdvisoryText;
    void title;
    void travelAdvisoryText;
}

@property (nonatomic, retain) UIColor *calendarColor;
@property (nonatomic, retain) NSDateInterval *dateInterval;
@property (nonatomic, copy) NSString *location;
@property (nonatomic) BOOL showTravelAdvisoryText;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSAttributedString *travelAdvisoryText;

- (id /* block */).cxx_destruct;
- (id)calendarColor;
- (id)dateInterval;
- (float)firstBaselineOffsetFromTop;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)lastBaselineOffsetFromBottom;
- (void)layoutSubviews;
- (id)location;
- (void)setCalendarColor:(id)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setShowTravelAdvisoryText:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setTravelAdvisoryText:(id)arg1;
- (BOOL)showTravelAdvisoryText;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)title;
- (id)travelAdvisoryText;

@end
