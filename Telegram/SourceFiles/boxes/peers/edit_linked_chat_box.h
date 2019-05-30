/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "boxes/abstract_box.h"

object_ptr<BoxContent> EditLinkedChatBox(
	not_null<ChannelData*> channel,
	not_null<ChannelData*> chat,
	Fn<void(ChannelData*)> callback);

object_ptr<BoxContent> EditLinkedChatBox(
	not_null<ChannelData*> channel,
	std::vector<not_null<ChannelData*>> &&chats,
	Fn<void(ChannelData*)> callback);