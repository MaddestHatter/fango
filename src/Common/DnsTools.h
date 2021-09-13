// Copyright (c) 2016-2019 The Karbowanec developers
// Copyright (c) 2018-2019 Conceal Network & Conceal Devs
// Copyright (c) 2018-2021 Fandom Gold Society
// Copyright (c) 2019-2021 Fango Developers
//
// This file is part of Fango.
//
// Fango is free software distributed in the hope that it 
// will be useful- but WITHOUT ANY WARRANTY; without even the
// implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
// PURPOSE. You are encouraged to redistribute it and/or modify it
// under the terms of the GNU General Public License v3 or later
// versions as published by the Free Software Foundation.
// You should receive a copy of the GNU General Public License
// along with Fango. If not, see <https://www.gnu.org/licenses/>

#pragma once

#include <string>
#include <vector>

namespace Common {
  bool fetch_dns_txt(const std::string domain, std::vector<std::string>&records);
}