/*
 * Copyright (C) 2012-2013 Fanout, Inc.
 *
 * This file is part of Pushpin.
 *
 * Pushpin is free software: you can redistribute it and/or modify it under
 * the terms of the GNU Affero General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Pushpin is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef INSPECTDATA_H
#define INSPECTDATA_H

#include <QByteArray>
#include <QVariant>

class InspectData
{
public:
	bool doProxy;
	QByteArray sharingKey;
	QByteArray sid;
	QHash<QByteArray, QByteArray> lastIds;
	QVariant userData;

	InspectData() :
		doProxy(false)
	{
	}
};

#endif
