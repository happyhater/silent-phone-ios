/*
Copyright (C) 2016, Silent Circle, LLC.  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Any redistribution, use, or modification is done solely for personal
      benefit and not for any commercial purpose or for monetary gain
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name Silent Circle nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL SILENT CIRCLE, LLC BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
#import "ChatBubbleTextView.h"

@implementation ChatBubbleTextView
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender
{
    if ([self.delegate respondsToSelector:@selector(textView:canPerformAction:)])
        return [(id <ChatBubbleTextViewDelegate>)self.delegate textView:self canPerformAction:action];
    else
        return NO;
}

- (void)copy:(id)sender
{
    if ([self.delegate respondsToSelector:@selector(textView:menuActionCopy:)])
        [(id <ChatBubbleTextViewDelegate>)self.delegate textView:self menuActionCopy:sender];
}

- (void)burn:(id)sender
{
    if ([self.delegate respondsToSelector:@selector(textView:menuActionBurn:)])
        [(id <ChatBubbleTextViewDelegate>)self.delegate textView:self menuActionBurn:sender];
}

- (void)forward:(id)sender
{
    if ([self.delegate respondsToSelector:@selector(textView:menuActionForward:)])
        [(id <ChatBubbleTextViewDelegate>)self.delegate textView:self menuActionForward:sender];
}

- (void)info:(id)sender
{
   // if ([self.delegate respondsToSelector:@selector(tableView:menuActionInfo:)])
        [(id <ChatBubbleTextViewDelegate>)self.delegate textView:self menuActionInfo:sender];
}

- (void)resend:(id)sender
{
    if ([self.delegate respondsToSelector:@selector(textView:menuActionResend:)])
        [(id <ChatBubbleTextViewDelegate>)self.delegate textView:self menuActionResend:sender];
}


- (void)other:(id)sender
{
    if ([self.delegate respondsToSelector:@selector(tableView:menuActionOther:)])
        [(id <ChatBubbleTextViewDelegate>)self.delegate textView:self menuActionOther:sender];
}

- (BOOL)textView:(UITextView *)textView shouldInteractWithURL:(NSURL *)URL inRange:(NSRange)characterRange
{
    return YES;
}

-(BOOL)canBecomeFirstResponder
{
    return YES;
}
@end
