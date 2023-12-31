#pragma once

namespace nem::hacks {
	class c_anti_aim {
	private:
		void at_target( float& yaw ) const;

		bool auto_direction( float& yaw );

		bool					m_choke_cycle_switch{};
		int						m_prev_tick_count{}, m_auto_dir_side{},
			m_side_counter{}, m_on_shot_side_counter{}, m_choke_start_cmd_number{};
	public:
		int select_side( );

		void legit_aa( valve::user_cmd_t* const user_cmd, float& yaw, bool& bSendPacket );

		void select_yaw( float& yaw, const int side, valve::user_cmd_t& user_cmd );

		void fake_move( valve::user_cmd_t& user_cmds );

		void choke( valve::user_cmd_t* const user_cmd );

		void set_pitch( valve::user_cmd_t& user_cmd );

		void process( valve::user_cmd_t& user_cmd, const float yaw, const int side, const int choked_cmds );

		__forceinline bool enabled( const valve::user_cmd_t* const user_cmd ) const;
	};

	inline const auto g_anti_aim = std::make_unique< c_anti_aim >( );
}

#include "impl/anti_aim.inl"