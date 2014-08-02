# tarai.rb
#
# たらい回し関数のPureRuby実装版

class Tarai
  def tak(x, y, z)
    if x <= y
      return z
    else
      tak(tak((x-1), y, z), tak((y-1), z, x), tak((z-1), x, y))
    end
  end

  def tarai(x, y, z)
    if x <= y
      return y
    else
      tarai(tarai((x-1), y, z), tarai((y-1), z, x), tarai((z-1), x, y))
    end
  end
end

### 実行
x, y, z = ARGV[0].to_i, ARGV[1].to_i, ARGV[2].to_i
puts Tarai.new.tak(x, y, z)
#puts Tarai.new.tarai(x, y, z)

