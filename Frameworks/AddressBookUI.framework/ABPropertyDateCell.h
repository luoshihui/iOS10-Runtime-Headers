/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIDatePicker, UIViewController;

@interface ABPropertyDateCell : ABPropertySimpleCell <UITextFieldDelegate> {
    UIDatePicker *_datePicker;
    UIViewController *_contentViewController;
}

@property(retain) UIDatePicker * datePicker;
@property(retain) UIViewController * contentViewController;


- (void)dateChanged:(id)arg1;
- (BOOL)_shouldUseYearlessPickerForDateComponents:(id)arg1;
- (void)localeUpdated:(id)arg1;
- (void)setDatePicker:(id)arg1;
- (id)datePicker;
- (void)dealloc;
- (void)setContentViewController:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (id)contentViewController;
- (void)prepareForReuse;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end